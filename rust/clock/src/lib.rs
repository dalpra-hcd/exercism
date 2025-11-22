use std::fmt::{Debug, Display};

pub struct Clock {
    hours: i32,
    minutes: i32,
}

impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
        Self::from_total_minutes(hours * 60 + minutes)
    }

    pub fn add_minutes(&self, minutes: i32) -> Self {
        Self::from_total_minutes(self.total_minutes() + minutes)
    }

    #[inline]
    fn total_minutes(&self) -> i32 {
        self.hours * 60 + self.minutes
    }

    #[inline]
    fn from_total_minutes(total: i32) -> Self {
        let minutes = total.rem_euclid(60);
        let hours = total.div_euclid(60).rem_euclid(24);
        Self { hours, minutes }
    }
}

impl Display for Clock {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:02}:{:02}", self.hours, self.minutes)
    }
}

impl Debug for Clock {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("Clock")
            .field("hours", &self.hours)
            .field("minutes", &self.minutes)
            .finish()
    }
}

impl PartialEq for Clock {
    fn eq(&self, other: &Self) -> bool {
        self.hours == other.hours && self.minutes == other.minutes
    }
}
