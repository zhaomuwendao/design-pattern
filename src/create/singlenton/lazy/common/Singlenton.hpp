class Singlenton
{
private:
  static Singlenton *instance;
  Singlenton()
  {
  }

public:
  static auto newInstance() -> Singlenton *
  {
    if (instance == nullptr)
    {
      instance = new Singlenton;
    }
    return instance;
  }
};

Singlenton *Singlenton::instance = nullptr;
