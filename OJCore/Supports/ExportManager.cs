using System.Data;
using System.Runtime.InteropServices;
using Excel = Microsoft.Office.Interop.Excel;

namespace Judge.Supports
{
    public class ExportManager
    {
        //Fast export
        //Use Binary Search Tree (SortedList<,>)
        //SQL Database -> 2d data -> excel
        //---> SQLite don't have PIVOT & RIGHT JOIN & FULL OUTER JOIN
        public static void ExportDataSetToExcel(DataSet ds, bool firstRowColCenter = false)
        {
            Excel.Application app = new Excel.Application();
            Excel.Workbook workbook = app.Workbooks.Add();
            bool first = true;

            app.Calculation = Excel.XlCalculation.xlCalculationManual;
            app.ScreenUpdating = false;

            foreach (DataTable table in ds.Tables)
            {
                if (table.Columns.Count == 0 || table.Rows.Count == 0)
                    continue;
                if (!first)
                    workbook.Worksheets.Add();
                first = false;
                Excel.Worksheet sheet = workbook.ActiveSheet;
                sheet.Name = table.TableName;
                for (int i = 0; i < table.Columns.Count; ++i)
                {
                    sheet.Cells[1, i + 1] = table.Columns[i].ColumnName;
                }
                Excel.Range range = sheet.Range[sheet.Cells[2, 1], sheet.Cells[table.Rows.Count + 1, table.Columns.Count]];
                object[,] data = new object[table.Rows.Count, table.Columns.Count];
                for (int i = 0; i < table.Rows.Count; ++i)
                {
                    for (int j = 0; j < table.Columns.Count; ++j)
                    {
                        data[i, j] = table.Rows[i][j];
                    }
                }
                range.Value2 = data;
                range.Cells.HorizontalAlignment = Excel.XlHAlign.xlHAlignCenter;
                range.EntireColumn.AutoFit();
                range.EntireRow.AutoFit();
                if (firstRowColCenter)
                {
                    range = sheet.Range[sheet.Cells[1, 1], sheet.Cells[1, 1]];
                    range.HorizontalAlignment = Excel.XlHAlign.xlHAlignCenter;
                    range.VerticalAlignment = Excel.XlVAlign.xlVAlignCenter;
                }
            }

            app.Calculation = Excel.XlCalculation.xlCalculationAutomatic;
            app.ScreenUpdating = true;
            app.DisplayAlerts = true;
            app.Visible = true;

            Marshal.ReleaseComObject(workbook);
            Marshal.ReleaseComObject(app);
        }
    }
}
