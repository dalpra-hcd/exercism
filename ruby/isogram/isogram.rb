module Isogram
  def self.isogram?(input)
    return false if input.nil?

    seen = 0

    input.each_char do |ch|
      next unless ch.match?(/[A-Za-z]/)

      bit = (ch.downcase.ord - "a".ord)
      return false if bit < 0 || bit > 25

      mask = 1 << bit
      return false if (seen & mask) != 0

      seen |= mask
    end
  end
end
