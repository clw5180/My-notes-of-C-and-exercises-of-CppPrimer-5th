——my answer to the exercise of c++ primer, 5th Edition



——【C++ Primer】C++ Primer 5th 阅读心得记录与困惑

20180903：Chapter7，后期考虑把写的CScreen和CWindowMgr类结合某个GUI库（学习下vzch的Gaclib？）开发一个写字板？

20180904：Chapter8，为何cout>>没加endl也会刷新缓冲区？是不是因为cin关联到cout？（P282：一个输出流可能被关联到另一个流。在这种情况下，当读写被关联的流时，关联到的流的缓冲区会被刷新）。另外P283例子说cin.tie(&cerr)会刷新cerr而不是cout，然而我这样做了，同样没加endl还是立刻刷新缓冲区？

20180905：Chapter9，为何vector<string>还是vector<vector<vector<string>>>能容纳最大元素数的1.75倍？
（使用容器类的max_size方法进行测试）

20180906：Chapter9，详见note的cpp；另外这几种容器的区别，和iterator的用法还是需要再总结一下，用着不太熟练；

20180907：Chapter10，在做Practice 10.2时，发现比如输入一串字符串a b c d e 然后ctrl+z（EOF，即文件结束符）并回车，这时并不能起到结束输入的效果，需要再在下一行的起始位置输入ctrl+z，再回车才算真正结束；后来经过调试发现，比如输入a b c d e ctrl+z a a a，这时后面的a a a并不会计入在内；而且即使输入a b c d e ctrl+z a a a并回车然后输入a，这个a也不会计入在内，因为读取的时候，系统把a和上面的换行符'/x1a'（ASCII值为26）拼接起来变成了"x1aa"，所以统计的还是只有1个a；而如果输入的是a b c d e 回车，然后再输入a，回车，ctrl+z回车，这时就会统计输入了2个a；
    问题分析：通过F11进入cin>>str内部调试，并且上网查后发现，ctrl+z如果不在开头位置是不会作为文件结束符的，但是我发现确实会把这一行ctrl+z后面的输入都忽略掉了，并且会在下一行带上一个/n换行符，导致下一行第一个输入的a变成了"x1aa"。
    原因：（网友）windows的锅，ctrl+z只有在一行开始时才会被视为结束符。
    总结： 要想真正结束输入，必须在输入完之后回车另起一行，在开头输入ctrl+z并回车才有效。（赵4老师）
	   按Enter键可以从输入缓冲区取得整行的字符串；（记得之前看书，回车相当于回扫 + /n的效果）
	
	

