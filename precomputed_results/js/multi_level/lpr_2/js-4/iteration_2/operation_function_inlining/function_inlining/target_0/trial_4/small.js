const b = Array.prototype;
              b.unshift(4294967297);
              b.length = 256;
              const g = b.pop();
              return g;