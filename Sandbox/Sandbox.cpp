#define _CRT_SECURE_NO_WARNINGS

#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <psapi.h>
#include <stdio.h>

int main() {
	JOBOBJECT_EXTENDED_LIMIT_INFORMATION jobInfo = { 0 };
	jobInfo.BasicLimitInformation.LimitFlags = JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE;

	HANDLE job = CreateJobObject(NULL, NULL);
	if (!job) {
		fprintf(stderr, "Create Job Object error");
		return -1;
	}

	if (!SetInformationJobObject(job, JobObjectBasicLimitInformation, &jobInfo, sizeof(jobInfo))) {
		fprintf(stderr, "Set Information for Job Object error");
		return -1;
	}

	STARTUPINFO si;
	memset(&si, 0, sizeof(si));
	si.cb = sizeof(si);
	si.dwFlags |= STARTF_USESTDHANDLES;
	si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
	si.hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	si.hStdError = GetStdHandle(STD_ERROR_HANDLE);

	PROCESS_INFORMATION pi;
	memset(&pi, 0, sizeof pi);
	if (!CreateProcess(L"D:\\PCMS\\test.exe", (LPWSTR)L"ss", 0, 0, TRUE, 0, 0, 0, &si, &pi)) {
		fprintf(stderr, "Create process error");
		return -1;
	}
	if (!AssignProcessToJobObject(job, pi.hProcess)) {
		fprintf(stderr, "Assign process to job error");
		return -1;
	}
	SetConsoleCtrlHandler(NULL, TRUE);
	WaitForSingleObject(pi.hThread, INFINITE);

	CloseHandle(job);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	return 0;
}
