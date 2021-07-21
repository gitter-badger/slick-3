use hyperpony::cli;
use tracing::error;

async fn main() {
  let start = cli::run().await;
}
