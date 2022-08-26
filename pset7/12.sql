SELECT title
FROM people JOIN stars ON stars.person_id=people.id
JOIN movies on stars.movie_id=movies.id
WHERE name ="johnny depp"
AND movie_id IN(
    SELECT movie_id
    FROM people JOIN stars on stars.person_id=people.id
    WHERE name ='Helena bonhowncarter'
);
