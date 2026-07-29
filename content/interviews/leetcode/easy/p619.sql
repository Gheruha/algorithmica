-- EASY LEETCODE: 619. Biggest single number.
SELECT
  MAX(num) AS num
FROM
  (
    SELECT
      num
    FROM
      MyNumbers
    GROUP BY
      num
    HAVING
      COUNT(*) = 1
  ) AS num;
