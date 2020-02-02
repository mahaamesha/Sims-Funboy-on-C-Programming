TUGAS URO PROGRAMMING

Anggota: Avima Haamesha		16019102
	 Rexy Gamaliel R.	16519132
	 M. Fakhry Fernanda	10118096

Game ini terinspirasi dari The Sims, user memainkan seorang avatar dengan kondisi stats 
tertentu.
Win Identification: mendapatkan 100 money atau lebih
Lose Identification: Energy 0 ->> Life 0

Stats Avatar:
- Life
- Happiness
- Social
- Hygiene
- Health
- Money
- Energy

Activities:
- Sleep				- Hobby
- Eat				- Pray
- Bath				- Hangout
- Sport				- Study
- Work				- Party

Stats:
- Happiness
- Social
- Hygiene
- Health
- Money
- Energy

Activities:	Happiness	Social	Hygiene	Health	Money	Energy
- Sleep		0		0	-10	+15	0	+30
- Eat		+10		+5	-5	+20	-10	+15
- Bath		+5		0	+35	+5	0	+5
- Sport		+5		+15	-15	+15	-5	-20
- Work		-20		+15	-20	-15	+40	-25
- Hobby		+20		+25	-5	-5	-15	-10
- Pray		+10		+5	0	+5	0	0	
- Hangout	+15		+20	-10	-10	-20	-10
- Study		-15		+5	-5	-10	0	-20
- Party		+30		+25	-10	+5	-25	-15
- (Diam)        -5              -5      -5      -5      0       -5


FITUR TAMBAHAN (akan ditambahkan pada versi selanjutnya)

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
