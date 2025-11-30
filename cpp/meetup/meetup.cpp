#include "meetup.h"

namespace meetup {
scheduler::scheduler(boost::date_time::months_of_year month, int year)
    : month_(month), year_(year) {}

auto scheduler::monteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Monday);
}
auto scheduler::tuesteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Tuesday);
}
auto scheduler::wednesteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Wednesday);
}
auto scheduler::thursteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Thursday);
}
auto scheduler::friteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Friday);
}
auto scheduler::saturteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Saturday);
}
auto scheduler::sunteenth() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 13);
  return find(from, boost::date_time::Sunday);
}

auto scheduler::first_monday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Monday);
}
auto scheduler::first_tuesday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Tuesday);
}
auto scheduler::first_wednesday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Wednesday);
}
auto scheduler::first_thursday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Thursday);
}
auto scheduler::first_friday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Friday);
}
auto scheduler::first_saturday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Saturday);
}
auto scheduler::first_sunday() const -> boost::gregorian::date {
  auto from = boost::gregorian::date(year_, month_, 1);
  return find(from, boost::date_time::Sunday);
}

auto scheduler::second_monday() const -> boost::gregorian::date {
  auto from = first_monday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Monday);
}
auto scheduler::second_tuesday() const -> boost::gregorian::date {
  auto from = first_tuesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Tuesday);
}
auto scheduler::second_wednesday() const -> boost::gregorian::date {
  auto from = first_wednesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Wednesday);
}
auto scheduler::second_thursday() const -> boost::gregorian::date {
  auto from = first_thursday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Thursday);
}
auto scheduler::second_friday() const -> boost::gregorian::date {
  auto from = first_friday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Friday);
}
auto scheduler::second_saturday() const -> boost::gregorian::date {
  auto from = first_saturday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Saturday);
}
auto scheduler::second_sunday() const -> boost::gregorian::date {
  auto from = first_sunday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Sunday);
}

auto scheduler::third_monday() const -> boost::gregorian::date {
  auto from = second_monday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Monday);
}
auto scheduler::third_tuesday() const -> boost::gregorian::date {
  auto from = second_tuesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Tuesday);
}
auto scheduler::third_wednesday() const -> boost::gregorian::date {
  auto from = second_wednesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Wednesday);
}
auto scheduler::third_thursday() const -> boost::gregorian::date {
  auto from = second_thursday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Thursday);
}
auto scheduler::third_friday() const -> boost::gregorian::date {
  auto from = second_friday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Friday);
}
auto scheduler::third_saturday() const -> boost::gregorian::date {
  auto from = second_saturday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Saturday);
}
auto scheduler::third_sunday() const -> boost::gregorian::date {
  auto from = second_sunday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Sunday);
}

auto scheduler::fourth_monday() const -> boost::gregorian::date {
  auto from = third_monday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Monday);
}
auto scheduler::fourth_tuesday() const -> boost::gregorian::date {
  auto from = third_tuesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Tuesday);
}
auto scheduler::fourth_wednesday() const -> boost::gregorian::date {
  auto from = third_wednesday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Wednesday);
}
auto scheduler::fourth_thursday() const -> boost::gregorian::date {
  auto from = third_thursday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Thursday);
}
auto scheduler::fourth_friday() const -> boost::gregorian::date {
  auto from = third_friday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Friday);
}
auto scheduler::fourth_saturday() const -> boost::gregorian::date {
  auto from = third_saturday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Saturday);
}
auto scheduler::fourth_sunday() const -> boost::gregorian::date {
  auto from = third_sunday() + boost::gregorian::date_duration(1);
  return find(from, boost::date_time::Sunday);
}

auto scheduler::last_monday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Monday);
}
auto scheduler::last_tuesday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Tuesday);
}
auto scheduler::last_wednesday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Wednesday);
}
auto scheduler::last_thursday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Thursday);
}
auto scheduler::last_friday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Friday);
}
auto scheduler::last_saturday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Saturday);
}
auto scheduler::last_sunday() const -> boost::gregorian::date {
  return find_last(boost::date_time::Sunday);
}

auto scheduler::find(boost::gregorian::date from,
                     boost::gregorian::greg_weekday want) const
    -> boost::gregorian::date {

  auto start = from;
  while (start.day_of_week() != want) {
    start = start + boost::gregorian::date_duration(1);
  }

  return start;
}
auto scheduler::find_last(boost::gregorian::greg_weekday want) const
    -> boost::gregorian::date {

  auto last = boost::gregorian::date(
      year_, month_,
      boost::gregorian::gregorian_calendar::end_of_month_day(year_, month_));

  while (last.day_of_week() != want) {
    last = last - boost::gregorian::date_duration(1);
  }

  return last;
}
} // namespace meetup
