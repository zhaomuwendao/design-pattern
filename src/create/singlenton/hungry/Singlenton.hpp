class Singleton
{
private:
  static Singleton *instance;
  Singleton() {}

public:
  static auto newInstance() noexcept -> Singleton *
  {
    return nullptr;
  }
};
Singleton *Singleton::instance = new Singleton;
