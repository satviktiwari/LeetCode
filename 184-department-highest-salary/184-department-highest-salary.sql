SELECT Department.name AS 'Department', Employee.name AS 'Employee', salary
FROM Employee JOIN Department ON Employee.DepartmentId = Department.Id
WHERE (Employee.DepartmentId, salary) IN 
(SELECT DepartmentId, MAX(Salary) 
 FROM Employee
GROUP BY DepartmentId);