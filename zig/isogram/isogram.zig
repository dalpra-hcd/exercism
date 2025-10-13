pub fn isIsogram(str: []const u8) bool {
    var seen: u26 = 0;

    for (str) |c| {
        const bit: u8 = switch (c) {
            'A'...'Z' => c - 'A',
            'a'...'z' => c - 'a',
            else => continue,
        };
        const mask = @as(u26, 1) << @intCast(bit);
        if ((seen & mask) != 0) return false;
        seen |= mask;
    }

    return true;
}
