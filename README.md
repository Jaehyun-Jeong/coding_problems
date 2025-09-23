# Coding Problems

## Calculate execution time and memory usage

```bash
# without input
/usr/bin/time -f "real %E | user %U | sys %S | maxRSS %M KB" ./app > /dev/null

# with input
/usr/bin/time -f "real %E | user %U | sys %S | maxRSS %M KB" ./app < /dev/null > /dev/null
```
