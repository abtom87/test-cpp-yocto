// Interface for Observer: Display Unit observes
class IDisplayUnit {
  std::string mName;

public:
  virtual void notify(int16_t temperature){};
  virtual std::string printName() const = 0;

  virtual ~IDisplayUnit(){};
};

// Subject: notifies observers as soon as something changes
// TODO: use smart pointers instead of raw pointers.
class WeatherStation {
  std::vector<IDisplayUnit *> mObservers;
  std::int16_t mTemperature;

public:
  void setTemperature(std::int16_t temperature);

  void registerObserver(IDisplayUnit *dispUnit);

  void notify_observers();
};