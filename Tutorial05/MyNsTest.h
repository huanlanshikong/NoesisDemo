#include <NoesisGUI.h>
#include <vector>

class MyNsTest : public Noesis::Grid
{
public:
	MyNsTest();
	~MyNsTest();
	
	NS_IMPLEMENT_INLINE_REFLECTION(MyNsTest, Noesis::Grid)
	{
		NsMeta<Noesis::TypeId>("MyNsTest");
	}

private:
	void bindData();
	std::vector<std::string> titleItems;
	std::string item;
	Noesis::Gui::StackPanel* itemRoot;
};