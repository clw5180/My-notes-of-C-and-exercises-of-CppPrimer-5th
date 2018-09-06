——my answer to the exercise of c++ primer, 5th Edition



——【C++ Primer】C++ Primer 5th 阅读心得记录与困惑

20180903：Chapter7，后期考虑把写的CScreen和CWindowMgr类结合某个GUI库（学习下vzch的Gaclib？）开发一个写字板？

20180904：Chapter8，为何cout>>没加endl也会刷新缓冲区？是不是因为cin关联到cout？（P282：一个输出流可能被关联到另一个流。在这种情况下，当读写被关联的流时，关联到的流的缓冲区会被刷新）。另外P283例子说cin.tie(&cerr)会刷新cerr而不是cout，然而我这样做了，同样没加endl还是立刻刷新缓冲区？

20180905：Chapter9，为何vector<string>还是vector<vector<vector<string>>>能容纳最大元素数的1.75倍？
（使用容器类的max_size方法进行测试）

20180906：Chapter9，详见note的cpp；另外这几种容器的区别，和iterator的用法还是需要再总结一下，用着不太熟练；