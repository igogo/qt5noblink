class QApplication
{
public:
	static int cursorFlashTime();
};
int QApplication::cursorFlashTime()
{
	return 0;
}
class QStyleHints
{
public:
	int cursorFlashTime() const;
};
int QStyleHints::cursorFlashTime() const
{
	return 0;
}
