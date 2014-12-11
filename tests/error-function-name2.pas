var	a : integer;
	b : integer;
	ret : integer;

function sort(num1 : integer; num2: integer): integer;
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

	sort := result
end;

begin
	a := 400;
	b := 200;

	ret :=sort(a, b);

	write(ret)

end.
