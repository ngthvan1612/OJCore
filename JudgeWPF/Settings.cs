using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Xml.Serialization;
using Judge.Sys;
using System.Text.Json.Serialization;
using System.Text.Json;
using System.Text.Encodings.Web;
using System.Drawing;

namespace JudgeWPF
{
    public class FontConverterToJson : JsonConverter<Font>
    {
        public override Font Read(ref Utf8JsonReader reader, Type typeToConvert, JsonSerializerOptions options)
        {
            var tmp = reader.GetString();
            if (tmp == null)
                return new Font("Consolas", 12);
            return new FontConverter().ConvertFromString(tmp) as Font;
        }

        public override void Write(Utf8JsonWriter writer, Font value, JsonSerializerOptions options)
        {
            writer.WriteString("", new FontConverter().ConvertToString(value));
        }
    }

    public class Settings
    {
        public bool TreatExitCodeNonZeroAsRTE { get; set; } = false;

        //public Font EditorFont { get; set; } = new Font("Consolas", 13);

        public Settings Clone()
        {
            Settings settings = new Settings();
            foreach (PropertyInfo property in typeof(Settings).GetProperties().Where(p => p.CanWrite))
            {
                property.SetValue(settings, property.GetValue(this, null), null);
            }
            return settings;
        }

        public void Save()
        {
            FS.WriteAllText(FS.JudgeSettings, this.ToString());
        }

        public void Load()
        {
            if (!FS.FileExist(FS.JudgeSettings))
                return;
            string json = File.ReadAllText(FS.JudgeSettings);
            var tmp = JsonSerializer.Deserialize<Settings>(json);
            foreach (PropertyInfo property in typeof(Settings).GetProperties().Where(p => p.CanWrite))
            {
                property.SetValue(this, property.GetValue(tmp, null), null);
            }
        }

        public override string ToString()
        {
            return JsonSerializer.Serialize(this, new JsonSerializerOptions()
            {
                WriteIndented = true,
                Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping
            });
        }
    }
}
