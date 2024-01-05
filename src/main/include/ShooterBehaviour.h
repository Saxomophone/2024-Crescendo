#pragma once

#include "Wombat.h"
#include "Shooter.h"
#include <frc/XboxController.h>

class ShooterManualControl : public behaviour::Behaviour {
 public:
  ShooterManualControl(Shooter *shooter, frc::XboxController &codriver);

  void OnTick(units::second_t dt) override;

 private:
  Shooter *_shooter;
  frc::XboxController &_codriver;
};
