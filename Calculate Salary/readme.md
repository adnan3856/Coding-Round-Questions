numOfHoursWorked
basePay
inHandSalary = Base Pay + FlexiblePay + Bonus - IncomeTax
basepay
FlexiblePay
	basepay	< 40 K
		flexipay = 0
	basepay > 40K and < 50K
		flexipay = 30% of Basepay
	basepay > 50K and < 60K
		flexipay = 40% of basepay
	basepay > 60K
		flexipay = 50% of basepay
Bonus
	hours < 140
		bonus = 0
	140 < hours > 150
		bonus = 10% basepay * hours_eligible
	150 < hours > 160
		bonus = 20% basepay * hours_eligible
	160 < hours > 170
		bonus = 30% basepay * hours_eligible
	170 < hours
		bonus = 40% basepay * hours_eligible
165 hours
1000
bonus1 = 100 * 10 hours	= 1000
bonus2 = 200 * 10 hours	= 2000
bouns3 = 300 * 5 hours	= 1500
			   4500
Income tax
	
slab 1	 < 1lakh
	 tax = 0
slab 2	1Lac to 2 lac
	tax = 10%
slab 3      2lac to 3.5 lac
	tax = 20%
slab 4     > 3.5 lac
	tax = 30%
ex: gross = 80K, net = 80K
gross = 120K
tax = 20K * 10% = 2000
net = 1.18K
gross = 3.3 lacs
s1 = 0
s2 = 1lc * 10% = 10k
s3 = 1.3lc * 20% = 26k
net = 2.94 lacs