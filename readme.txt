TUGAS URO PROGRAMMING

Anggota: Avima Haamesha		16019102
	 Rexy Gamaliel R.	16519132
	 M. Fakhry Fernanda	10118096

Games simulasi terinspirasi dari the sims, user memainkan seorang avatar dengan kondisi stats 
tertentu.
Win Identification: mencapai parameter maksimum dari salah satu stats
Lose Identification: Energy 0 ->> Life 0

Stats Avatar:
-life, exp, energy, brain, money
-strengLvl, healthLvl, mentalLvl, spiritLvl, cleanLvl, hungerLvl, loveLvl, happinessLvl

Activities:
-sleep				-hobby
-study				-pray
-takeabath			-playwithfriend
-doingsport			-eat
-job				-party

//Edit (saran) - Rexy
Stats:
- Health
- Energy
- Brain
- Money
- Happiness
- Hygiene
- Spirit

Activities:	Health	Energy	Brain	Money	Happiness	Hygiene	Spirit
- Sleep		+10	+40	0	0	0		0	0
- Study		-5	-20	+15	0	-15		0	-5
- Bath		0	+5	0	0	+5		+30	0
- Sport		+15	-15	+5	-5	+5		-15	+5
- Work		-10	-20	0	+40	-20		-10	-5
- Hobby		0	-10	+5	-10	+15		0	+10
- Pray		0	+5	0	0	+10		0	+15	
- Hangout	-5	-15	-5	-25	+15		-10	+5
- Eat		+10	+20	0	-15	+5		0	0
- Party		-10	-15	-5	-20	+30		-5	-10

Effects:
Hunger:
	Cause	: Tidak <eat> selama 5 turn berturut-turut
	Effect	: Health -10/turn dan Energy -5/turn
	Debuff	: <Eat>
Illness:
	Cause	: Hygiene <= 30
	Effect	: Health -10/turn
	Debuff	: Hygiene > 30
Fatigue:
	Cause	: Tidak <Sleep> selama 6 turn berturut-turt
	Effect	: Health -5/turn dan Energy -10/turn
	Debuff	: <Sleep>
Stress:
	Cause	: Happiness <= 40
	Effect	: Health -5/turn, Brain -5/turn, dan Spirit -10/turn
	Debuff	: Happiness > 40
Mental illness:
	Cause	: Spirit <= 40
	Effect	: Health -10/turn
	Debuff	: Spirit > 40
Unproductive:
	Cause	: Tidak melakukan salah satu dari acitivities: study, work, hobby selama 4 turn berturut-turut
	Effect	: Brain -10/turn
	Debuff	: Melakukan salah satu dari activities di atas

Effect saat salah satu dari stat == 0:
- Health	: mati -> gameover
- Energy	: Health -15/turn
- Brain		: Money yang dihasilkan berkurang 20%
- Money		: Tidak bisa melakukan acitivites yang memerlukan Money
- Happiness	: Effect <Stress> meningkat 100%
- Hygiene	: Effect <Illness> meningkat 50%
- Spirit	: Effect <Mental Illness> meningkat 50%

#UROProgamming
