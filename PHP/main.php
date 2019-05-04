<?php foreach (range(1, 150) as $i) printf($i < 100 && (0 === $i % 3 || 3 === $i % 10) ? "%02d!\n" : "%03d\n", $i);
