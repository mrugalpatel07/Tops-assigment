- Q1 - Create a new database named school_db and a table called students with the following columns: student_id, student_name, age, class, and address.
create schema school_db;
CREATE DATABASE SCHOOL_DB;

create table student
(
student_id int not null unique,
student_name varchar(20) not null,
age int not null,
class int not null,
address varchar(50) not null
);

-- Q2 - Insert five records into the students table and retrieve all records using the SELECT statement.
insert into student values (101,'mrugal patel',15,10,'Ahmedabad'),
(102,'muskan_Patel',16,10,'unjha'),
(103,'kavy_Patel',12,8,'Mahesana'),
(104,'Mahi patel',12,8,'Baroda'),
(105,'Dhruv_Patel',14,9,'Ahmedabad'),
(106,'Parth_Patel',10,5,'surat'),
(107,'Partik_parmar',9,4,'Rajkot');

select * from student; 

--Q3 - Write SQL queries to retrieve specific columns (student_name and age) from the students table.

select student_name,age from student;

-- Q4 - Write SQL queries to retrieve all students whose age is greater than 10

select * from student where age>10;

-- Q5 - Create a table teachers with the following columns: teacher_id (Primary Key),teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).

create table teacher(
teacher_id int primary key,
teacher_name varchar(25) not null,
subject varchar(25) not null,
email varchar(50) unique
);

-- Q6 - Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.

create table teachers
(
teacher_id int primary key,
teacher_name varchar(25) not null,
subject varchar(10) not null,
email varchar(25) not null unique,
foreign key teachers(teacher_id) references student(student_id)
);

-- Q7 - Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key.

create table courses
(
course_id int primary key,
course_name varchar(25) not null,
course_credits float not null
);

-- Q8 - Use the CREATE command to create a database university_db.

create database university_db;


select * from courses;

-- Q9 - Modify the courses table by adding a column course_duration using the ALTER command.

alter table courses add column course_duration varchar(15) not null after course_credits;

-- Q10 - Drop the course_credits column from the courses table.

alter table courses drop column course_credits;

-- Q11 - Drop the teachers table from the school_db database.

drop table teachers;

-- Q12 - Drop the students table from the school_db database and verify that the table has been removed.

drop table student;

select * from student;

-- Q13 - Insert three records into the courses table using the INSERT command.

insert into courses values (1,'Computer Engineering','4 years'),
(2,'civil Engineering','4 Years'),
(3,'nursing' ,'4 years'),
(4,'IMBA','5 Years');

-- Q14 - Update the course duration of a specific course using the UPDATE command.

update courses set course_duration = '4 Yares' where course_id = 1; 

-- Q15 - Delete a course with a specific course_id from the courses table using the DELETE command.

delete from courses where course_id = 3;

-- Q16 - Retrieve all courses from the courses table using the SELECT statement.

select course_name from courses;

-- Q17 - Sort the courses based on course_duration in descending order using ORDER BY.

select * from courses  order by course_duration desc;

-- Q18 - Limit the results of the SELECT query to show only the top two courses using LIMIT.

select * from courses limit 2;

-- Q19 - Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.

create user user1 identified by 'mrugal@2722';
create user user2 identified by 'muskan@2227';
grant select on courses to user1;
  
-- Q20 - Revoke the INSERT permission from user1 and give it to user2.

revoke select on courses from user1;
grant select on courses to user2; 

-- Q24 - Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.

CREATE DATABASE EMPLOYEES_DB;

CREATE TABLE DEPARTMENTS
(
    DEPARTMENT_ID INT PRIMARY KEY,
    DEPARTMENT_NAME VARCHAR(25) NOT NULL
);

DROP TABLE DEPARTMENTS;

CREATE TABLE EMPLOYEES
(
    EMPLOYEE_ID INT NOT NULL UNIQUE,
    EMPLOYEE_NAME VARCHAR(25) NOT NULL,
    DEPARTMENT_ID INT NOT NULL,
    SALARY INT NOT NULL,
    Foreign Key EMPLOYEES(DEPARTMENT_ID) REFERENCES DEPARTMENTS(DEPARTMENT_ID)
);

DROP TABLE EMPLOYEES;

INSERT DEPARTMENTS VALUES (1,'it'),
(2,'MARKETING'),
(3,'devloper'),
(4,'MANAGMENT'),
(5,'HR'),
(6,'SECURITY');

SELECT * FROM DEPARTMENTS;

INSERT EMPLOYEES VALUES (1,'MRUGAL PATEL',1,35000),
(2,'DEEP PANCHAL',3,25000),
(3,'KRIMA KAMANI',2,30000),
(4,'KAVY PADALIYA',4,50000),
(5,'DEV PETHANI',5,20000),
(6,'JAY MAHIDA',2,25000),
(7,'HEMAL PATEL',4,55000),
(8,'VIVEK PARMAR',5,25000),
(9,'YASH CHAUDHARY',3,35000),
(10,'MUSKAN LILA',1,40000);
SELECT * FROM EMPLOYEES;

SELECT EMPLOYEES.EMPLOYEE_ID,EMPLOYEES.EMPLOYEE_NAME,DEPARTMENTS.DEPARTMENT_ID,DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS INNER JOIN EMPLOYEES ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

-- Q21 - Insert a few rows into the courses table and use COMMIT to save the changes.

insert into courses values (5,'COMPUTER_Engineering','4 Year'),
(6,'NETWORKING_Engineering','4 Year');
select * from courses;
commit;

-- Q22 - Insert additional rows, then use ROLLBACK to undo the last insert operation.

insert into courses values (7,'AI/ML','4 Year'),
(8,'FULL STACK','4 Year');

select * from courses;

rollback;

-- Q23 - Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.

update courses set course_duration = '3 Yares' where course_id = 2;
savepoint s1;
update courses set course_duration = '4 Yares' where course_id = 3;
savepoint s2;
update courses set course_duration = '4 Yares' where course_id = 5;
select * from courses;

rollback to savepoint s1;


-- Q25 - Use a LEFT JOIN to show all departments, even those without employees.

SELECT EMPLOYEES.EMPLOYEE_ID,EMPLOYEES.EMPLOYEE_NAME,DEPARTMENTS.DEPARTMENT_ID,DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS LEFT JOIN EMPLOYEES ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

-- Q26 - Group employees by department and count the number of employees in each department using GROUP BY.

SELECT DEPARTMENT_ID,COUNT(*) FROM EMPLOYEES GROUP BY DEPARTMENT_ID;

-- Q27 - Use the AVG aggregate function to find the average salary of employees in each department.

SELECT DEPARTMENT_ID,AVG(SALARY) FROM EMPLOYEES GROUP BY DEPARTMENT_ID;

-- Q28 - Write a stored procedure to retrieve all employees from the employees table based on department.
DELIMITER &&
CREATE PROCEDURE DISPLAY()
SELECT * FROM EMPLOYEES ORDER BY DEPARTMENT_ID;
END &&

CALL DISPLAY();

-- Q29 - Write a stored procedure that accepts course_id as input and returns the course details.

delimiter &&
create procedure display(in id int)
begin
select * from courses where course_id = id;
end &&

call display(1);

-- Q30 - Create a view to show all employees along with their department names.

CREATE VIEW EMPLOYEE_DEPARTMENT AS
SELECT EMPLOYEES.EMPLOYEE_ID,EMPLOYEES.EMPLOYEE_NAME,DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES LEFT JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

SELECT * FROM EMPLOYEE_DEPARTMENT;

-- Q31 - Modify the view to exclude employees whose salaries are below $50,000.

ALTER VIEW EMPLOYEE_DEPARTMENT AS
SELECT * FROM EMPLOYEES WHERE SALARY < 50000;

SELECT * FROM EMPLOYEE_DEPARTMENT;

-- Q32 - Create a trigger to automatically log changes to the employees table when a new employee is added.

-- Q33 - Create a trigger to update the last_modified timestamp whenever an employee record is updated.

CREATE TABLE UPDATE_EMPLOYEES
(
    EMPLOYEE_ID INT NOT NULL UNIQUE,
    EMPLOYEE_NAME VARCHAR(25) NOT NULL,
    DEPARTMENT_ID INT NOT NULL,
    SALARY INT NOT NULL,
    ACTION_DATE TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    ACTION_TYPE VARCHAR(10)
);

-- Q33 - Create a trigger to update the last_modified timestamp whenever an employee record is updated.
DROP TABLE UPDATE_EMPLOYEES;

CREATE OR REPLACE TRIGGER trg_employee_insert_log
AFTER INSERT ON EMPLOYEES
FOR EACH ROW
BEGIN
    INSERT INTO UPDATE_EMPLOYEES (EMPLOYEE_ID,EMPLOYEE_NAME,DEPARTMENT_ID,SALARY,ACTION_TYPE)
    VALUES (NEW.EMPLOYEE_ID,NEW.EMPLOYEE_NAME,NEW.DEPARTMENT_ID,NEW.SALARY);
END;

INSERT INTO UPDATE_EMPLOYEES(EMPLOYEE_ID,EMPLOYEE_NAME,DEPARTMENT_ID,SALARY) 
VALUES (11,'yash PARMAR',6,5000);
INSERT INTO UPDATE_EMPLOYEES(EMPLOYEE_ID,EMPLOYEE_NAME,DEPARTMENT_ID,SALARY) 
VALUES (12,'smit PATEL',6,15000);

SELECT * FROM UPDATE_EMPLOYEES;

-- Q34 - Write a PL/SQL block to print the total number of employees from the employees table.

DECLARE
    TOTAL_EMPLOYEE NUMBER;
BEGIN
    SELECT COUNT(*) INTO TOTAL_EMPLOYEE
    FROM EMPLOYEES
    JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;
    DBMS_OUTPUT.PUT_LINE('Total number of employees: '||(TOTAL_EMPLOYEE));
END;

-- Q35 - Create a PL/SQL block that calculates the total sales from an orders table

CREATE TABLE ORDERS
(
ORDER_ID INT NOT NULL UNIQUE,
ORDER_NAME VARCHAR(15) NOT NULL,
QUN INT NOT NULL
);

INSERT INTO ORDERS VALUES (1,'TOOTHPAST',5);
INSERT INTO ORDERS VALUES (2,'PERFUME',10);
INSERT INTO ORDERS VALUES (3,'TOOTHBRUSH',8);
INSERT INTO ORDERS VALUES (4,'SHOPE',6);
INSERT INTO ORDERS VALUES (5,'COMB',3);
INSERT INTO ORDERS VALUES (6,'SHEMPOO',2);

DECLARE 
 TOTAL_SALES NUMBER;
BEGIN 
  SELECT SUM(QUN) INTO TOTAL_SALES
  FROM ORDERS;
  DBMS_OUTPUT.PUT_LINE ('TOTAL SALES IS : '||(TOTAL_SALES));
END;

-- Q36 - Write a PL/SQL block using an IF-THEN condition to check the department of an employee.

DECLARE 
  EMP_ID NUMBER :=8;
	DEPT_ID NUMBER;
	EMP_NAME VARCHAR(25);
BEGIN
    SELECT  EMPLOYEE_NAME,DEPARTMENT_ID 
    INTO EMP_NAME,DEPT_ID 
    FROM EMPLOYEES 
    WHERE EMPLOYEE_ID = EMP_ID;
    IF DEPT_ID = 1 THEN
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||'it');
		ELSIF DEPT_ID = 2 THEN
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||'marketing.');
		ELSIF DEPT_ID = 3 THEN
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||' devloper.');
		ELSIF DEPT_ID = 4 THEN
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||'MANAGMENT');
		ELSIF DEPT_ID = 5 THEN
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||'HR');
		ELSE
		DBMS_OUTPUT.PUT_LINE (EMP_NAME||'SECURITY');
	END IF;
END;

-- Q37 - Use a FOR LOOP to iterate through employee records and display their names

DECLARE 
	EMP_NAME EMPLOYEES.EMPLOYEE_NAME %TYPE;
BEGIN
	FOR EMP_REC IN (SELECT EMPLOYEE_NAME FROM EMPLOYEES) LOOP
		EMP_NAME := EMP_REC.EMPLOYEE_NAME;
		DBMS_OUTPUT.PUT_LINE ('EMPLOYEE NAME IS '|| EMP_NAME);
	END LOOP;
END;

-- Q38 - Write a PL/SQL block using an explicit cursor to retrieve and display employee details.

DECLARE
  EMP_ID EMPLOYEES.EMPLOYEE_ID%TYPE;
  EMP_NAME EMPLOYEES.EMPLOYEE_NAME%TYPE;
  DEPT_ID EMPLOYEES.DEPARTMENT_ID%TYPE;
  SAL EMPLOYEES.SALARY%TYPE;
  CURSOR EMP IS SELECT EMPLOYEE_ID,EMPLOYEE_NAME,DEPARTMENT_ID,SALARY FROM EMPLOYEES;
BEGIN
OPEN EMP;
LOOP
FETCH EMP INTO EMP_ID,EMP_NAME,DEPT_ID,SAL;
DBMS_OUTPUT.PUT_LINE (EMP_ID||' | '|| EMP_NAME ||' | '||DEPT_ID||' | '|| SAL);
EXIT WHEN EMP%NOTFOUND;
END LOOP;
CLOSE EMP;
END;

-- Q39 - Create a cursor to retrieve all courses and display them one by one.

DECLARE
  COU_ID COURSES.COURSE_ID%TYPE;
  COU_NAME COURSES.COURSE_NAME%TYPE;
  CURSOR COU IS SELECT COURSE_ID,COURSE_NAME FROM COURSES;
BEGIN
OPEN COU;
LOOP
FETCH COU INTO COU_ID,COU_NAME;
DBMS_OUTPUT.PUT_LINE (COU_ID||' | '|| COU_NAME);
EXIT WHEN COU%NOTFOUND;
END LOOP;
CLOSE COU;
END;

-- Q40 - Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.

UPDATE EMPLOYEES SET SALARY = 38000 WHERE EMPLOYEE_ID = 2;
SAVEPOINT E1;
UPDATE EMPLOYEES SET SALARY = 29000 WHERE EMPLOYEE_ID = 3;
SAVEPOINT E2;
UPDATE EMPLOYEES SET SALARY = 20000 WHERE EMPLOYEE_ID = 5;
SAVEPOINT E3;

-- Q41 -use  Commit part of a transaction after using a savepoint and then rollback the remaining changes.

ROLLBACK TO SAVEPOINT E1;

COMMIT;

SELECT * FROM EMPLOYEES;




