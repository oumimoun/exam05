#include "Fwoosh.hpp"
#include "Warlock.hpp"
#include "Dummy.hpp"

void f()
{
  system("leaks a.out");
}

int main()
{
	atexit(f);
	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh *fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
}
