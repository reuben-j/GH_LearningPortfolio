from google.cloud import bigquery

client = bigquery.CLient()

dataset_ref = clinet.dataset("hacker_news", project="bigquery-public-data")

dataset = client.get_datset(dataset_ref)

tables = list(client.list_tables(dataset))

for table in tables:
    print(table.table_id)