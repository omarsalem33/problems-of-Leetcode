/* Write your T-SQL query statement below */
SELECT TEAChER_ID , COUNT(DISTINCT Subject_ID) as CNT 
From Teacher 
Group By TEAChER_ID