var	a : integer;
	b : integer;
	ret : integer;
	foo : string;

function max(num1 : integer; num2: integer): integer;
var result: integer;

begin
	if (num1 > num2) then
	begin
		result := num1
	end
	else
	begin
		result := num2
	end;

	max := result
end;

begin
	a := 400;
	b := 200;

	foo := "Dlouhy string
	na vice radek";

	ret := max(a, b);

	write(ret)

end.
