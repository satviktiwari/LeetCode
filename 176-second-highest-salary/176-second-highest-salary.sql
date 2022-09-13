# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary
FROM Employee
where salary not in (
SELECT max(salary)
    from Employee
);