module Grains
  def self.square(n)
    raise ArgumentError, "index must be between 1 and 64" unless (1..64).cover?(n)
    1 << (n - 1)
  end

  def self.total
    (1 << 64) - 1
  end
end
