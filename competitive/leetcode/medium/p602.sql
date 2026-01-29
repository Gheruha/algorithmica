-- MEDIUM LEETCODE
-- Problem 602: Friend Requests II- Who has more friends.
-- 1. I need to somehow count every id;
-- 2. Then I need to show the max;
SELECT
  id,
  COUNT(*) AS num
FROM
  (
    SELECT
      requester_id AS id
    FROM
      RequestAccepted
    UNION ALL
    SELECT
      accepter_id AS id
    FROM
      RequestAccepted
  ) ids
GROUP BY
  id
ORDER BY
  num DESC
LIMIT
  1
