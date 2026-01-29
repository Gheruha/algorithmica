-- EASY: LEETCODE - 596. Classes with at least 5 students.
SELECT
  class
FROM
  Courses
GROUP BY
  class
HAVING
  COUNT(DISTINCT (student)) >= 5
