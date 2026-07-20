# Write your MySQL query statement below
with cte as(
    select 
        id,
        lead(num,1)over (order by id) as num_lead1,
        lead(num,2)over (order by id) as num_lead2
        from Logs
)
select Distinct num as ConsecutiveNums from Logs
join cte on cte.id = Logs.id
where num = num_lead1 and num_lead1 = num_lead2 