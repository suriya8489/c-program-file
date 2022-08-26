SELECT DISTINCT name
FROM people JOIN stars ON stars.person_id=people.id
WHERE name !="kevin bacon"
AND movies_id IN (
    SELECT movie_id
    FROM people JOIN stars ON stars.person_id=people.id
    WHERE name ="kevin bacon"
    AND birth=1958
);