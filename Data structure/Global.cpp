class Global
{
private:
    static int _Score;

public:
    static void SetScore(int value)
    {
        _Score = value;
    }

    static int GetScore()
    {
        return _Score;
    }
};