/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257
258
259
260
261
262
263
264
265
266
267
268
269
270
271
272
273
274
275
276
277
278
279
280
281
282
283
284
285
286
287
288
289
290
291
292
293
294
295
296
297
298
299
300
301
302
303
304
305
306
307
308
309
310
311
312
313
314
315
316
317
318
319
320
321
322
323
324
325
326
327
328
329
330
331
332
333
334
335
336
337
338
339
340
341
342
343
344
345
346
347
348
349
350
351
352
353
354
355
356
357
358
359
360
361
362
363
364
365
366
367
368
369
370
371
372
373
374
375
376
377
378
379
380
381
382
383
384
385
386
387
388
389
390
391
392
393
394
395
396
397
398
399
400
401
402
403
404
405
406
407
408
409
410
411
412
413
414
415
416
417
418
419
420
421
422
423
424
425
426
427
428
429
430
431
432
433
434
435
436
437
438
439
440
441
442
443
444
445
446
447
448
449
450
451
452
453
454
455
456
457
458
459
460
461
462
463
464
465
466
467
468
469
470
471
472
473
474
475
476
477
478
479
480
481
482
483
484
485
486
487
488
489
490
491
492
493
494
495
496
497
498
499
500
501
502
503
504
505
506
507
508
509
510
511
512
513
514
515
516
517
518
519
520
521
522
523
524
525
526
527
528
529
530
531
532
533
534
535
536
537
538
539
540
541
542
543
544
545
546
547
548
549
550
551
552
553
554
555
556
557
558
559
560
561
562
563
564
565
566
567
568
569
570
571
572
573
574
575
576
577
578
579
580
581
582
583
584
585
586
587
588
589
590
591
592
593
594
595
596
597
598
599
600
601
602
603
604
605
606
607
608
609
610
611
612
613
614
615
616
617
618
619
620
621
622
623
624
625
626
627
628
629
630
631
632
633
634
635
636
637
638
639
640
641
642
643
644
645
646
647
648
649
650
651
652
653
654
655
656
657
658
659
660
661
662
663
664
665
666
667
668
669
670
671
672
673
674
675
676
677
678
679
680
681
682
683
684
685
686
687
688
689
690
691
692
693
694
695
696
697
698
699
700
701
702
703
704
705
706
707
708
709
710
711
712
713
714
715
716
717
718
719
720
721
722
723
724
725
726
727
728
729
730
731
732
733
734
735
736
737
738
739
740
741
742
743
744
745
746
747
748
749
750
751
752
753
754
755
756
757
758
759
760
761
762
763
764
765
766
767
768
769
770
771
*/
/*staff_unittest1.cpp*/

//
// Staff unit tests for myset data structure.
//
// CS 341 Staff
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//

#include "stdafx.h"
#include "CppUnitTest.h"
#include <fstream>

#include "myset.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

int __staff_Student_creates;
int __staff_Student_copies;
int __staff_Student_deletes;

class __staff_Student
{
private:
	int UIN;
	int Mid, Fnl;

public:
	__staff_Student()
	{
		UIN = Mid = Fnl = -1;
		__staff_Student_creates++;
	}

	__staff_Student(int uin, int mid, int fnl)
		: UIN(uin), Mid(mid), Fnl(fnl)
	{
		__staff_Student_creates++;
	}

	__staff_Student(const __staff_Student& other)
		: UIN(other.UIN), Mid(other.Mid), Fnl(other.Fnl)
	{
		__staff_Student_copies++;
	}

	~__staff_Student()
	{
		__staff_Student_deletes++;
	}

	int getUIN() const
	{
		return UIN;
	}

	bool operator<(const __staff_Student& other) const
	{
		return this->UIN < other.UIN;
	}
};


namespace MySetUnitTests
{
	TEST_CLASS(your_netid_tests)
	{
	public:

		TEST_METHOD(__original_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(__original_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(__original_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(__original_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(__original_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(__original_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(__original_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(__original_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}


		//
		// Additional tests:
		//
		TEST_METHOD(__staff_copy_constructor_01)
		{
			myset<std::string>  V;

			std::vector<std::string> S = {
				"apples", "bananas", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan"
			};

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == S.size());

			//
			// copy constructor:
			//
			myset<std::string> V2 = V;

			V.insert("AAA");

			Assert::IsTrue(V2.size() == S.size());
			Assert::IsTrue(V.size() == S.size() + 1);

			Assert::IsTrue(V["apples"]);
			Assert::IsTrue(V["AAA"]);

			Assert::IsTrue(V2["apples"]);
			Assert::IsTrue(!V2["AAA"]);
		}

		void __staff_copy_constructor_02_Function(myset<std::string> V2, int origSize)
		{
			Assert::IsTrue(V2.size() == origSize);

			V2.insert("AAA");
			V2.insert("ZZZ");

			Assert::IsTrue(V2.size() == origSize + 2);

			Assert::IsTrue(V2["apples"]);
			Assert::IsTrue(V2["AAA"]);
			Assert::IsTrue(V2["ZZZ"]);
		}

		TEST_METHOD(__staff_copy_constructor_02)
		{
			myset<std::string>  V;

			std::vector<std::string> S = {
				"apples", "bananas", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan"
			};

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == S.size());

			//
			// copy constructor:
			//
			__staff_copy_constructor_02_Function(V, S.size());

			// no changes to V:
			Assert::IsTrue(V.size() == S.size());

			Assert::IsTrue(V["apples"]);
			Assert::IsTrue(!V["AAA"]);
			Assert::IsTrue(!V["ZZZ"]);
		}

		TEST_METHOD(__staff_operator_assign_01)
		{
			myset<std::string>  V;

			std::vector<std::string> S = {
				"apples", "bananas", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan"
			};

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == S.size());

			//
			// copy constructor:
			//
			myset<std::string> V2;

			V2.insert("AAA");
			V2.insert("ZZZ");

			V2 = V;

			V.insert("AAA");

			Assert::IsTrue(V2.size() == S.size());
			Assert::IsTrue(V.size() == S.size() + 1);

			Assert::IsTrue(V["apples"]);
			Assert::IsTrue(V["AAA"]);

			Assert::IsTrue(V2["apples"]);
			Assert::IsTrue(!V2["AAA"]);
			Assert::IsTrue(!V2["ZZZ"]);
		}

		TEST_METHOD(__staff_clear_01)
		{
			myset<std::string>  V;

			std::vector<std::string> S = {
				"apples", "bananas", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan"
			};

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == S.size());

			//
			// clear:
			//
			V.clear();

			Assert::IsTrue(V.size() == 0);
			Assert::IsTrue(!V["apples"]);

			Assert::IsTrue(V.insert("BBB"));
			Assert::IsTrue(V.insert("AAA"));
			Assert::IsTrue(V.insert("ZZZ"));
			Assert::IsTrue(V.insert("DDD"));

			Assert::IsTrue(V.size() == 4);

			Assert::IsTrue(V.insert("HHH"));

			Assert::IsTrue(V.size() == 5);

			Assert::IsTrue(V["AAA"]);
			Assert::IsTrue(V["BBB"]);
			Assert::IsTrue(V["ZZZ"]);
			Assert::IsTrue(V["DDD"]);
			Assert::IsTrue(V["HHH"]);
		}

		TEST_METHOD(__staff_clear_02)
		{
			myset<std::string>  V;

			std::vector<std::string> S = {
				"apples", "bananas", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan"
			};

			std::vector<std::string> Just4 = {
				"ZZZ", "YYY", "XXX", "AAA"
			};

			for (auto s : Just4)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == Just4.size());

			//
			// clear:
			//
			V.clear();

			Assert::IsTrue(V.size() == 0);
			Assert::IsTrue(!V["AAA"]);

			// now let's insert more items than it had, to make sure
			// it resets and grows correctly:

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			Assert::IsTrue(V.size() == S.size());

			Assert::IsTrue(V["apples"]);
			Assert::IsTrue(V["uic"]);
			Assert::IsTrue(!V["ZZZ"]);
			Assert::IsTrue(!V["AAA"]);
			Assert::IsTrue(!V["YYY"]);
			Assert::IsTrue(!V["XXX"]);
		}

		TEST_METHOD(__staff_data_file)
		{
			//
			// This one loads about 10,000 strings from a
			// file.  In "Debug" mode, could take a few mins
			// to run given O(N) insert.  But if you switch 
			// to "Release" mode (drop-down on Visual Studio 
			// toolbar), build, and run the tests, this one
			// should complete in a couple seconds.  
			//
			// If Debug mode takes > 10 mins, or release mode
			// takes > 10 secs, then something is wrong with
			// insert or find in terms of time complexity.
			//
			myset<std::string>  S;
			string line, first, last;

			{
				//ifstream file("..\\MySet\\fortune1000.txt");
				ifstream file("..\\MySet\\words-by-freq-top10K.txt");

				Assert::IsTrue(file.good());

				getline(file, line);  // N: # of names
				int N = stoi(line);
				int i = 1;

				while (getline(file, line))
				{
					if (i == 1)
						first = line;
					else if (i == N)
						last = line;

					Assert::IsTrue(S.insert(line));

					++i;
				}

				Assert::IsTrue(S.size() == N);
			}

			Assert::IsTrue(S[first]);
			Assert::IsTrue(S[last]);

			Assert::IsTrue(!S.insert(first));
			Assert::IsTrue(!S.insert(last));

			// file is closed so we can reopen and test find.

			{
				//ifstream file("..\\MySet\\fortune1000.txt");
				ifstream file("..\\MySet\\words-by-freq-top10K.txt");

				Assert::IsTrue(file.good());

				getline(file, line);  // N: # of names

				while (getline(file, line))
				{
					Assert::IsTrue(S[line]);
					Assert::IsTrue(!S.insert(line));
				}
			}

		}//test

		TEST_METHOD(__staff_objects_01)
		{
			__staff_Student_creates = 0;
			__staff_Student_copies = 0;
			__staff_Student_deletes = 0;

			{
				__staff_Student kyang3(123, 0, 0);
				__staff_Student jlo8(234, 0, 0);

				myset<__staff_Student>  V;

				Assert::IsTrue(V.insert(__staff_Student(123, 100, 100)));
				Assert::IsTrue(V.size() == 1);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(!V[jlo8]);
			}

			int students = __staff_Student_creates +
				+__staff_Student_copies;

			int deletes = __staff_Student_deletes;

			Assert::IsTrue(students == deletes);
		}

		TEST_METHOD(__staff_objects_02)
		{
			__staff_Student_creates = 0;
			__staff_Student_copies = 0;
			__staff_Student_deletes = 0;

			{
				__staff_Student kyang3(1, 0, 0);
				__staff_Student jhummel2(999, 0, 0);
				__staff_Student sdeitz2(1000, 0, 0);

				myset<__staff_Student>  V;

				for (int uin = 1; uin < 1000; ++uin)
				{
					Assert::IsTrue(V.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);      }

			int students = __staff_Student_creates +
				+__staff_Student_copies;

			int deletes = __staff_Student_deletes;

			Assert::IsTrue(students == deletes);
		}

		TEST_METHOD(__staff_objects_03)
		{
			__staff_Student_creates = 0;
			__staff_Student_copies = 0;
			__staff_Student_deletes = 0;

			{
				__staff_Student kyang3(1, 0, 0);
				__staff_Student jhummel2(999, 0, 0);
				__staff_Student sdeitz2(1000, 0, 0);

				myset<__staff_Student>  V;

				for (int uin = 1; uin < 1000; ++uin)
				{
					Assert::IsTrue(V.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);

				V.clear();

				Assert::IsTrue(V.size() == 0);
				Assert::IsTrue(!V[kyang3]);
				Assert::IsTrue(!V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);

				for (int uin = 1; uin < 6; ++uin)
				{
					Assert::IsTrue(V.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V.size() == 5);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(!V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);      }

			int students = __staff_Student_creates +
				+__staff_Student_copies;

			int deletes = __staff_Student_deletes;

			Assert::IsTrue(students == deletes);
		}

		TEST_METHOD(__staff_objects_04)
		{
			__staff_Student_creates = 0;
			__staff_Student_copies = 0;
			__staff_Student_deletes = 0;

			{
				__staff_Student kyang3(1, 0, 0);
				__staff_Student jhummel2(999, 0, 0);
				__staff_Student sdeitz2(1000, 0, 0);

				myset<__staff_Student>  V;

				for (int uin = 1; uin < 1000; ++uin)
				{
					Assert::IsTrue(V.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);

				// copy constructor:
				myset<__staff_Student>  V2 = V;

				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V2.size() == 999);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);
				Assert::IsTrue(V2[kyang3]);
				Assert::IsTrue(V2[jhummel2]);
				Assert::IsTrue(!V2[sdeitz2]);

				for (int uin = 1000; uin < 1005; ++uin)
				{
					Assert::IsTrue(V2.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V2.size() == 1004);
				Assert::IsTrue(V2[kyang3]);
				Assert::IsTrue(V2[jhummel2]);
				Assert::IsTrue(V2[sdeitz2]);      }

			int students = __staff_Student_creates +
				+__staff_Student_copies;

			int deletes = __staff_Student_deletes;

			Assert::IsTrue(students == deletes);
		}

		TEST_METHOD(__staff_objects_05)
		{
			__staff_Student_creates = 0;
			__staff_Student_copies = 0;
			__staff_Student_deletes = 0;

			{
				__staff_Student kyang3(1, 0, 0);
				__staff_Student jhummel2(999, 0, 0);
				__staff_Student sdeitz2(1000, 0, 0);

				myset<__staff_Student>  V;

				for (int uin = 1; uin < 1000; ++uin)
				{
					Assert::IsTrue(V.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);

				// assignment:
				myset<__staff_Student>  V2;

				for (int uin = 1; uin < 6; ++uin)
				{
					Assert::IsTrue(V2.insert(__staff_Student(uin, 100, 100)));
				}

				Assert::IsTrue(V2.size() == 5);
				Assert::IsTrue(V2[kyang3]);

				V2 = V;  // assignment copy:
				Assert::IsTrue(V.size() == 999);
				Assert::IsTrue(V2.size() == 999);

				Assert::IsTrue(V[kyang3]);
				Assert::IsTrue(V[jhummel2]);
				Assert::IsTrue(!V[sdeitz2]);
			}

			int students = __staff_Student_creates +
				+__staff_Student_copies;

			int deletes = __staff_Student_deletes;

			Assert::IsTrue(students == deletes);
		}

		TEST_METHOD(__staff_iterators_01)
		{
			myset<std::string>  V;
			myset<std::string>  V2;

			std::vector<std::string> S = {
				"apples", "oranges", "pizza",
				"cat", "dog", "lion", "tiger", "bear",
				"house", "boat", "car", "plane", "uic",
				"uci", "michigan", "bananas"
			};

			for (auto s : S)
				Assert::IsTrue(V.insert(s));

			std::vector<std::string> Just4 = {
				"ZZZ", "YYY", "XXX", "AAA"
			};

			for (auto s : Just4)
				Assert::IsTrue(V2.insert(s));

			Assert::IsTrue(V.size() == S.size());
			Assert::IsTrue(V2.size() == Just4.size());

			auto iter = V.begin();
			auto iter2 = V2.begin();

			Assert::IsTrue(*iter == "apples");
			Assert::IsTrue(*iter2 == "AAA");

			++iter;
			++iter2;
			Assert::IsTrue(*iter == "bananas");
			Assert::IsTrue(*iter2 == "XXX");

			++iter;
			++iter2;
			Assert::IsTrue(*iter == "bear");
			Assert::IsTrue(*iter2 == "YYY");

			++iter;
			++iter2;
			Assert::IsTrue(*iter == "boat");
			Assert::IsTrue(*iter2 == "ZZZ");

			++iter;
			++iter2;
			Assert::IsTrue(*iter == "car");
			Assert::IsTrue(iter2 == V2.end());

			++iter;
			Assert::IsTrue(iter != V.end());
		}



	};
}