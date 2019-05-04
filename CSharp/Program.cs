using System;
using System.Linq;

namespace CSharp
{
	class Program
	{
		static void Main() => Enumerable.Range(1, 150).ToList().ForEach(i => Console.WriteLine(i < 100 && (0 == i % 3 || 3 == i % 10 || 3 == (i / 10) % 10) ? i.ToString("D2") + "!" : i.ToString("D3")));
	}
}
