#include "display.h"

class TFTDisplay : public Display
{
  public:
    void init();
    void doScreenBackLight(screen_backlight_t state);

    void displaySplashScreen();
    void displayIdleScreen(uint8_t rate_index, uint8_t power_index, uint8_t ratio_index, uint8_t motion_index, uint8_t fan_index, bool dynamic, uint8_t running_power_index, uint8_t message_index);
    void displayMainMenu(menu_item_t menu);
    void displayValue(menu_item_t menu, uint8_t value_index);
    void displayWiFiConfirm();
    void displayWiFiStatus();
    void displayBindConfirm();
    void displayBindStatus();
};
