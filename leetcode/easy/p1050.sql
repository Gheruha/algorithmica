-- EASY LEETCODE: 1050. Actors and Directors that cooperated at least 3 times.
SELECT
  actor_id,
  director_id
FROM
  ActorDirector
GROUP BY
  CONCAT_WS (':', actor_id, director_id)
HAVING
  COUNT(*) >= 3;
