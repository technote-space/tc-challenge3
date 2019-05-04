for i in range(1, 151): print((format(i, '0>2') + '!' if i < 100 and (0 == i % 3 or 3 == i % 10) else format(i, '0>3')))
