INSERT INTO Submissions(ProblemID, UserID, CompileMessage)
SELECT Problems.ID, Users.ID, 'compile ok'
FROM Problems, Users
WHERE ProblemName = 'DivAB' and UserName = 'tourist';
SELECT sqlite_sequence.seq from sqlite_sequence
WHERE sqlite_sequence.name = 'Submissions';