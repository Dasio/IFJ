{ Za jak dlouho vystrizlivite? }

var
	sila_napoje: real;
	objem: real;
	hmotnost_osoby: real;
	promile_v_krvi: real;
	cas_vyprchani: real;
	koeficient: real;
	pohlavi: string;

begin
	write('Zadejte v procentech silu napoje: ');
	readln(sila_napoje);

	write('Zadej v dcl kolik jsi toho vypil: ');
	readln(objem);

	write('Zadej v kilogramech kolik vazis: ');
	readln(hmotnost_osoby);

	write('jsi muz(m) nebo zena(z)?');

	readln(pohlavi);
	while find(pohlavi, 'm') + find(pohlavi, 'z') <> 1 do
	begin
		write('Zadejte m nebo z: ');
		readln(pohlavi)
	end;

	if pohlavi = 'm' then
	begin
		koeficient := 0.68
	end
	else
	begin
		koeficient := 0.55
	end;


	promile_v_krvi := (sila_napoje * objem * 0.8) / (hmotnost_osoby * koeficient);

	cas_vyprchani := promile_v_krvi / 0.15;

	write('Alkohol vyprcha za ', cas_vyprchani, 'hodin'#10'')
end.
