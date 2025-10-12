const std = @import("std");

pub fn isIsogram(str: []const u8) bool {
    var seen: u26 = 0;

    for (str) |c| {
        if (std.ascii.isAlphabetic(c)) {
            const lower = std.ascii.toLower(c);
            const bit = @as(u26, 1) << @intCast(lower - 'a');

            if ((seen & bit) != 0) {
                return false;
            }
            seen |= bit;
        }
    }

    return true;
}
