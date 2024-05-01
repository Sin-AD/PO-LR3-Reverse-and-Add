using System;

class MainClass
{
public static void Main(string[] args)
{
int n = int.Parse(Console.ReadLine()); // количество тестов

for (int i = 0; i < n; i++)
{
long num = long.Parse(Console.ReadLine()); // число для поиска палиндрома
int iterations = 0; // количество итераций

while (!IsPalindrome(num) && num <= 4294967295)
{
num = Reverse(num) + num;
iterations++;
}
if (IsPalindrome(num))
Console.WriteLine(iterations + " " + num);
else
Console.WriteLine("Error");
}
}

// функция для проверки, является ли число палиндромом
static bool IsPalindrome(long num)
{
long reversed = Reverse(num);
return num == reversed;
}

// функция для переворачивания числа
static long Reverse(long num)
{
long reversed = 0;

while (num > 0)
{
long digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}

return reversed;
}
}
