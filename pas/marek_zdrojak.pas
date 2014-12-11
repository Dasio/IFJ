var
    a : integer;
    vysl : integer;


function factorial(n : integer) : integer;
var
    temp_result : integer;
    decremented_n : integer;
begin
    if n < 2 then begin
        factorial := 1
    end
    else begin
        decremented_n := n - 1;
        temp_result := factorial(decremented_n);
        factorial := n * temp_result
    end
end;


begin
    a := 1;
    while a < 1000 do begin
            vysl := factorial(a);
        a := a + 1
            {write('Vysledek je: ', vysl, ''#10'')}
        end
end.



{
var
    a:integer;
    res:integer;

function f2(n : integer) : integer; forward;´

function f(n : integer) : integer;
var
    temp_result : integer;
    x : integer;
begin
    x := 0;
    while n > 0 do begin
    n := n - 1;
    temp_result := f(n);
    x := temp_result + x
    end;
    f := x
end;

function f2(n : integer) : integer;
var
    temp_result : integer;
    x : integer;
begin
    x := 0;
    while n > 0 do begin
    n := n - 1;
    temp_result := f(n);
    x := temp_result + x
    end
    f2 := x
end;

begin
    a := 3;
    while a > 0 do begin
        res := f(a);
        write(res)
    end
end.}
