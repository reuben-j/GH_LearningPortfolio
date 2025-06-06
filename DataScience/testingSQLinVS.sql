-- Active: 1749167728856@@127.0.0.1@5432@postgres
SELECT * FROM customers;

DROP TABLE IF EXISTS student_habits;

CREATE TABLE student_habits (
    student_id TEXT,
    age INTEGER,
    gender TEXT,
    study_hours_per_day FLOAT,
    social_media_hours FLOAT,
    netflix_hours FLOAT,
    part_time_job TEXT,
    attendance_percentage FLOAT,
    sleep_hours FLOAT,
    diet_quality TEXT,
    exercise_frequency INTEGER,
    parental_education_level TEXT,
    internet_quality TEXT,
    mental_health_rating INTEGER,
    extracurricular_participation TEXT,
    exam_score FLOAT
);

COPY student_habits(student_id,age,gender,study_hours_per_day,social_media_hours,netflix_hours,part_time_job,attendance_percentage,sleep_hours,diet_quality,exercise_frequency,parental_education_level,internet_quality,mental_health_rating,extracurricular_participation,exam_score)
FROM '/Users/reubenjarvela/Desktop/General/GH_LearningPortfolio/DataScience/student_habits_cleaned.csv'
DELIMITER ','
CSV HEADER;

\COPY mytable FROM '/Users/reubenjarvela/Desktop/General/GH_LearningPortfolio/DataScience/student_habits_cleaned.csv' DELIMITER ',' CSV HEADER;


SELECT * FROM student_habits;

SELECT part_time_job, exam_score FROM student_habits
WHERE exam_score > 80;
