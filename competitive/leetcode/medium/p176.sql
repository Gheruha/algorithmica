-- LEETCODE: MEDIUM - 176. Second highest salary.
-- I need to return SecondHighestSalary 
-- select every colum
SELECT
  (
    SELECT DISTINCT
      salary
    FROM
      Employee
    ORDER BY
      salary DESC
    LIMIT
      1
    OFFSET
      1
  ) AS SecondHighestSalary;
