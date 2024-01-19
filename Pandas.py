import pandas as pd
print(pd.DataFrame([1,2,3,4,5],list(1,2,3,4,5)[::-1],pd.date_range('today',periods=5)))