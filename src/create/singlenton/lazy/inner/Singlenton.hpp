class Singlenton
{
private:
  Singlenton() {}
  class SinglentonHolder
  {
  private:
    friend class Singlenton;
    static Singlenton *instance;
  };

public:
  static auto newInstance() -> Singlenton *
  {
    return Singlenton::SinglentonHolder::instance;
  }
};

Singlenton *Singlenton::SinglentonHolder::instance = new Singlenton;
