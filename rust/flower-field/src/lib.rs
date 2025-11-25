pub fn annotate(garden: &[&str]) -> Vec<String> {
    let h = garden.len();
    let w = garden.first().map_or(0, |row| row.len());

    let mut out: Vec<Vec<char>> = garden.iter().map(|row| row.chars().collect()).collect();

    for y in 0..h {
        for x in 0..w {
            if out[y][x] == '*' {
                continue;
            }

            let mut count = 0;
            for dy in -1..=1 {
                for dx in -1..=1 {
                    if dy == 0 && dx == 0 {
                        continue;
                    }
                    let ny = y as isize + dy;
                    let nx = x as isize + dx;
                    if ny >= 0
                        && nx >= 0
                        && ny < h as isize
                        && nx < w as isize
                        && out[ny as usize][nx as usize] == '*'
                    {
                        count += 1;
                    }
                }
            }

            if count > 0 {
                out[y][x] = char::from_digit(count, 10).unwrap();
            }
        }
    }

    out.into_iter()
        .map(|row| row.into_iter().collect())
        .collect()
}
