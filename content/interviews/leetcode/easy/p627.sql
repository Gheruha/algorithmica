-- EASY LEETCODE: 627. Swap salaries.
UPDATE Salary
SET
  sex = CASE
    WHEN sex = 'm' THEN 'f'
    WHEN sex = 'f' THEN 'm'
  END;
