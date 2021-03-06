//===--- weather_station.cpp - ----------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "current_conditions_display.hpp"
#include "forecast_display.hpp"
#include "statistics_display.hpp"
#include "weather_data.hpp"
#ifdef _HEAT_INDEX_DISPLAY_
#include "heat_index_display.hpp"
#endif

int main(int argc, char* argv[]) {

  std::unique_ptr<headfirst::WeatherData>
    weather_data(new headfirst::WeatherData());

  std::unique_ptr<headfirst::CurrentConditionsDisplay>
    current_display(new headfirst::CurrentConditionsDisplay());
  current_display->SetSubject(weather_data.get());
  std::unique_ptr<headfirst::StatisticsDisplay>
    statistics_display(new headfirst::StatisticsDisplay());
  statistics_display->SetSubject(weather_data.get());
  std::unique_ptr<headfirst::ForecastDisplay>
    forecast_display(new headfirst::ForecastDisplay());
  forecast_display->SetSubject(weather_data.get());
#ifdef _HEAT_INDEX_DISPLAY_
  std::unique_ptr<headfirst::HeatIndexDisplay>
    heat_index_display(new headfirst::HeatIndexDisplay());
  heat_index_display->SetSubject(weather_data.get());
#endif

  weather_data->SetMeasurements(80, 65, 30.4f);
  weather_data->SetMeasurements(82, 70, 29.2f);
  weather_data->SetMeasurements(78, 90, 29.2f);

  return 0;
}

